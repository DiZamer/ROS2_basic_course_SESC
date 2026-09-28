const { deflateSync } = require('node:zlib')

const krokiMermaid = (md) => {
  const defaultFence = md.renderer.rules.fence
  md.renderer.rules.fence = (tokens, idx, options, env, self) => {
    const token = tokens[idx]
    const lang = (token.info || '').trim().split(/\s+/)[0].toLowerCase()
    if (lang !== 'mermaid') return defaultFence(tokens, idx, options, env, self)
    const url = `https://kroki.io/mermaid/svg/${deflateSync(Buffer.from(token.content, 'utf8'), { level: 9 }).toString('base64url')}`
    return `<p class="kroki-image-container"><img src="${url}" style="max-width:100%;max-height:520px;" /></p>`
  }
}

module.exports = {
  engine: ({ marp }) => marp.use(krokiMermaid),
}
